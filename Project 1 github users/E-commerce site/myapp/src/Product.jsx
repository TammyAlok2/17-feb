import React from 'react'
import products from './data'
import './product.css'
import { Link } from 'react-router-dom'
const Product = () => {
  return (
    <>
     <h2>Products</h2>
    <div className="container">
      {

        
        products.map((item)=>{
          return (
            <>
            <img src={item.photo} alt="hello" />
            <div className="name">{item.name}</div>
            <Link to={`/products/${item.id}`}>More </Link>

            </>
          )
        })
      }
     
    </div>
    </>
  )
}

export default Product