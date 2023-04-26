import React from 'react'
import { useState } from 'react'
import './useStatearray.css'
const useStatearray = () => {
  const bioData = [{
    id:'01', name :"alok tamrakar" , class : 'btech'
  },
  {
    id:'02',name :"ankita gupta", class :"btech",
  },
  {
    id:'03',name :"ankita gupta", class :"btech",
  },
  {
    id:'04',name :"ankita gupta", class :"btech",
  }
]
const [myName,userName] = useState(bioData);
const clearall = ()=>{
        userName ([]);
}

    return (
    <>
     {
        myName.map((userinput) => {
            return (

            <div className='container'>
           id : {userinput.id} name:{userinput.name} class: {userinput.class} 
          </div>
         ) })
     }
     <button onClick={clearall}>Clear</button>
    </>
  )
}

export default useStatearray
