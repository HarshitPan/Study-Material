const {MongoClient} = require('mongodb');
const url='mongodb://localhost:27017';
const client=new MongoClient(url);

try{
async function getData()
//function getData()
{
    //let result=client.connect();
    let result=await client.connect();
    let db_identifier=result.db('try');
    let collect=db_identifier.collection('collections');
    let response = await collect.find({}).toArray();
    console.log(response);
}
getData();

}
catch(e)
{
    console.log("Error Occured..."+e)
}