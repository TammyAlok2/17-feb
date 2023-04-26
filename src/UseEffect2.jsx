import React ,{useEffect, useState} from 'react'

const UseEffect2 = () => {
    const [widthcount,setwidthcount]=useState(window.screen.width);
    const actualWidth =()=>{
        setwidthcount(window.innerWidth);
    }
    useEffect(() => {
        console.log("add");
    window.addEventListener("resize",actualWidth);
    
      return () => {
        console.log("remove");
        window.removeEventListener("resize",actualWidth);
      }
    }, )
    
  return (
    <div>
      <p>The actual size of the window</p>
      <h1>{widthcount}</h1>
    </div>
  )
}

export default UseEffect2
