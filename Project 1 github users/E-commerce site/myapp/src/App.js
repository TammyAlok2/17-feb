import React from 'react'
import Products from './Product'
import SingleProduct from './SingleProduct'
import { BrowserRouter ,Routes,Route } from 'react-router-dom'

const App = () => {
  return (
    <>
      <BrowserRouter>
      <Routes>
      <Route index element={<Products/>} />
            <Route path='products/:productId' element={<SingleProduct />} />
            </Routes>
      </BrowserRouter>
    </>
  )
}

export default App


