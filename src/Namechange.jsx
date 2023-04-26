import React from 'react'
import { useState } from 'react'
import './Namechange.css'
const Namechange = () => {
const [myName,funName] = useState('alok love ankita');

const setUser =()=>{
    let value = myName;
    (value === 'alok love ankita')? funName('alok tamrakar'):funName('alok love ankita');
}

  return (
    <>
    <div className='container'>
<div className="Name"> 
<h1>{myName}</h1>
<button onClick={setUser}>plz click me </button>
</div>
    </div>
    </>
  )
}

export default Namechange
