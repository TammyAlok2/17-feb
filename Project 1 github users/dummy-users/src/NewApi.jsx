import React, { useEffect,useState } from 'react'

const NewApi = () => {
const [users,getUsers] = useState([]);

    const setUsers = async ()=>{
        const response =  await fetch ("https://zenquotes.io/api/quotes/");
     getUsers (await response.json());
    
    }
    useEffect(()=>{
setUsers();
    },[])
  return (
    <>
    <h1>
        List of the Thoughts by great person 
    </h1>

    {
        users.map((currElem)=>{
            return (
                <> 
                <div> <h2> {currElem.q} </h2></div>
                <div> quote By : {currElem.a} </div>
                </>
            )
        })
    }
    </>
  )
}

export default NewApi
