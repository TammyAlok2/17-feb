import React , {useEffect, useState} from 'react'
import Menu from './Menu.js'

const Filter = () => {
const [items, setItems]=useState(Menu);
const filterItems=(itemCateg)=>{
const updatedItem = Menu.filter((curElem)=>{
    return curElem.category===itemCateg;
})
setItems(updatedItem);
}


  return (
    <>
<h1>all the products </h1>
<button onClick={(()=>filterItems('breakfast'))}>Breakfast</button>
<button  onClick={(()=>filterItems('Lunch'))}>Lunch</button>
<button  onClick={(()=>filterItems('Dinner'))}>Dinner</button>
<button onClick={(()=>{setItems(Menu)})}>All</button>

{
  
    items.map((curElem)=>{
     const {id,name,category,description}=curElem;
        return(
            <>
             <div className='name'>{curElem.name}</div>
    <div className="description">{curElem.category}</div>
    <div className="price">{curElem.price}</div>
            </>
        )
    })
}
   

    </>
  )
}

export default Filter
