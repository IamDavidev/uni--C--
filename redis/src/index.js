//#region Imports and requires
const express = require('express');
const axios = require('axios');
const app = express();
const responseTime = require('response-time');
const redis = require('redis');
//#endregion
const client = redis.createClient({
  host: 'redis-server',
  port: 6379,
});
// #region Express configuration
app.use(responseTime());

//#endregion

//#region Express routes
app.get('/character', async (req, res) => {
  const response = await axios.get('https://rickandmortyapi.com/api/character');
  // console.log(response.data)
  client.set(
    'characters',
    JSON.stringify(response.data.results),
    (err, reply) => {
      if (err) throw err;
      console.log(reply);

      res.json(response.data);
    }
  );
});
//#endregion

app.listen(3001);
console.log('Server running on port 3001');
