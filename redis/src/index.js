//#region Imports and requires
const express = require('express');
const axios = require('axios');
const app = express();
const responseTime = require('response-time');
const redis = require('redis');
const {Promisify} = require('utils')
//#endregion
const client = redis.createClient({
  host: '127.0.0.1',
  port: 6379,
});
// #region Express configuration
app.use(responseTime());

//#endregion

//#region Express routes
app.get('/character', async (req, res) => {
  client.set('character',async (err, reply) => {
    if (reply) {
      return res.json(JSON.parse(reply));
    }
    const response =await   axios.get(
      'https://rickandmortyapi.com/api/character'
    );

    client.set(
      'character',
      JSON.stringify(response.data.results),
      (err, reply) => {
        if (err) console.log(err);
        console.log(reply);

        res.json(response.data);
      }
    );
  });
});
//#endregion

app.listen(3001);
console.log('Server running on port 3001');
