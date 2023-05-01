import React, { useEffect,useState } from 'react'
import './UseEffectproject.css'
const UseEffectproject = () => {
const [users,setUsers] = useState([]);

const getUsers = async()=>{
    const response =  await fetch('https://api.github.com/users')
    setUsers(await response.json()); 

    
}

    useEffect(()=>{
        getUsers();
    },[])


  return (
    <>
    <div>
    <h1>Users List</h1>
    <div className='container-fluid mt=5'> 
    <div className='row text-center'>
        {
            users.map((curElem)=>{
return (
    <div>
   <div className="col-10 col-md-4 mt-5">
                      <div className="card p-2">
                                <div className="d-flex align-items-center">
                                        <div className="image"> <img src={curElem.avatar_url}   width="155" /></div>
                                    <div className="ml-3 w-100">Alok tamrakar
                                            <h4 className="mb-0 mt-0 textLeft"> {curElem.login}</h4>
                                            {/* <span className="text-left">{type }</span> */}
                                        <div className="p-2 mt-2 bg-primary d-flex justify-content-between rounded text-white stats">
                                                <div className="d-flex flex-column">
                                                    <span className="articles">Articles</span> <span className="number1">200</span> </div>
                                                <div className="d-flex flex-column">
                                                    <span className="followers">Followers</span> <span className="number2">500</span> </div>
                                                <div className="d-flex flex-column">
                                                    <span className="rating">Rating</span> <span className="number3"> 5 star </span> </div>
                                        </div>
                                    </div>
                             </div>
                          </div>
                    </div>

        </div>
)
            })
        }
   

 
    </div>
    </div>
    </div>
    </>
  )
}

export default UseEffectproject
