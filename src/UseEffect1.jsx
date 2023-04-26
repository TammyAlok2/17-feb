import React, { useEffect, useState } from "react";

const UseEffect1 = () => {
  const [count, setCount] = useState(0);
  useEffect(() => {
    console.log("this is firt one in the useefetc")
if(count>=1){
document.title=`newtab ${count}`;
}
else{
    document.title=`newtab`;
}
  } ,[count]);
  console.log("this is console log");
  return (
    <div>
      <h1>{count}</h1>
      <button
        onClick={() => {
          setCount(count + 1);
        }}
      >
        click me 🖤🖤
      </button>
    </div>
  );
};

export default UseEffect1;
