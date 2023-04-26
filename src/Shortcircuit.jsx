import React, { useState } from 'react'

const Shortcircuit = () => {
    const [demo, Setdemo]=useState(" ")
  return (
    <div>
        <h1>This is the short circuit in the react js used to do if else in the jsx</h1>
      <h1>{demo || "hello this is me alok tamrkar" }</h1>
      <h1>{demo && 
      <>
      <p>Hello unknown</p>
<h1>love you alot dear</h1>
      </>}</h1>
      <div>This is for the everyone </div>
  
    </div>
  )
}

export default Shortcircuit
