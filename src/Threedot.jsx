import React, { useState } from 'react'
import './useStatearray.css'
const Threedot = () => {
const [myObject,setMyobject] = React.useState({Name:'Alok tamarkar',class: 'btech', id : '01'});

const changeall =()=>{
    setMyobject ({ ...myObject ,Name:'ankita gupta' , class: 'biotech cse '});
}
  return (
    <>
      <div className='container'>
        name : {myObject.Name} class : {myObject.class}  id : {myObject.id}
      </div>
      <button onClick={changeall}>update</button>
    </>
  )
}

export default Threedot
