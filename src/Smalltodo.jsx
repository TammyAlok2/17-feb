import React from 'react'
import { useState } from 'react'
import './useStatearray.css'
const Smalltodo = () => {
  const bioData = [{
    id:'01', name :"alok tamrakar" , class : 'btech'
  },
  {
    id:'02',name :"ankita gupta", class :"btech",
  },
  {
    id:'03',name :"aman tamrakar", class :"btech",
  },
  {
    id:'04',name :"muskan tamrakar", class :"btech",
  }
]
const [myName,userName] = useState(bioData);
const clearall = ()=>{
        userName ([]);
}
const remove =(id)=>{
const newarray = myName.filter((curElem)=>{
 return curElem.id !== id;
})
userName(newarray);
}

    return (
    <>
     {
        myName.map((userinput) => {
            return (

            <div className='container' key={userinput.id}>
           name:{userinput.name} class: {userinput.class} 
        <button onClick={ ()=> remove(userinput.id)}> remove </button>
          </div>
         ) })
     }
     <button onClick={clearall}>Clear</button>
    </>
  )
}

export default Smalltodo
