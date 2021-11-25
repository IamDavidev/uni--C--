//#region Imports and requires
const express = require('express');
const axios = require('axios');
const app = express();
const responseTime = require('response-time');
const redis = require('redis');
const { promisify } = require('util');
//#endregion
const client = redis.createClient({
  host: '127.0.0.1',
  port: 6379,
});
// #region  configuration
app.use(responseTime());
const ASYNC_GET = promisify(client.get).bind(client);
const ASYNC_SET = promisify(client.set).bind(client);
//#endregion

//#region Express routes
app.get('/character', async (req, res) => {
  try {
    // respoonse form redis
    const reply = ASYNC_GET('chararter');
    if (reply) return res.json(JSON.parse(reply));

    //response from api
    const response = await axios.get(
      'https://rickandmortyapi.com/api/character'
    );

    await ASYNC_SET('character', JSON.stringify(response.data));
    res.json(response.data);
    
  } catch (err) {
    console.log(err);
  }
  // client.set('character',async (err, reply) => {
  //   if (reply) {
  //     return res.json(JSON.parse(reply));
  //   }
  //   const response =await   axios.get(
  //     'https://rickandmortyapi.com/api/character'
  //   );

  //   client.set(
  //     'character',
  //     JSON.stringify(response.data.results),
  //     (err, reply) => {
  //       if (err) console.log(err);
  //       res.json(response.data);
  //       console.log(reply);

  //     }
  //   );
  // });
});
//#endregion

app.listen(3001);
console.log('Server running on port 3001');
