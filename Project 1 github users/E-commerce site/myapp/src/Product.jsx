import React from 'react'

const Product = () => {
    const [items,setitems]=useState([]);

    const getItems = async()=>{
      const response =  await fetch ("https://fakestoreapi.com/products");
      setitems(await response.json());
    }
    useEffect(()=>{
      getItems();
    })
    
    return (
      <>
      <h2>Product Cards</h2>
  {
    items.map((currElem)=>{
      return (
        <div className='name'>{currElem.name}</div>
      )
    })
  }
      </>
    )
}

export default Product
