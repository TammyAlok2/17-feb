import React from 'react'
import products from './data'
import { useParams } from 'react-router-dom'
const SingleProduct = () => {
    const {productId} = useParams();
    const product = products.find((main)=>main.id === productId);
    console.log(product);
    const {name,photo} = product;
  
    
  return (
    <div>
<h2>{productId}</h2>
<h1>{name}</h1>
<img src={photo} alt='hello'/>


    </div>
  )
}

export default SingleProduct