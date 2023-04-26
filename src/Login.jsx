import React from "react";
import { useState } from "react";
const Login = () => {
  const [Email, setEmail] = useState("");
  const [Passward, setPassward] = useState("");
const [AllEntry , setallEntry] = useState([]);
  const SubmitLogin = (e) => {
    e.preventDefault();
    const newEntry = { email:Email, passward : Passward }
setallEntry([...AllEntry,newEntry]);

  };
  return (
    <>
      <div>
        <form action="" onSubmit={SubmitLogin}>
          <label htmlFor="email"> Email </label>
          <input
            type="email"
            name="name"
            id="name"
            value={Email}
            onChange={(e) => {
              setEmail(e.target.value);
            }}
          />
          <label htmlFor="Passwared">Passward</label>
          <input
            type="password"
            name="passward"
            id="passward"
            value={Passward}
            onChange={(e) => {
              setPassward(e.target.value);
            }}
          />
          <button type="submit" onSubmit={SubmitLogin}>
            Login
          </button>
        </form>
      </div>

      <div>
        {
            AllEntry.map((current) =>{
                return (
                    <div> {current.email} <h3>{current.passward}</h3></div>
            

                )
            })
        }
      </div>
    </>
  );
};

export default Login;
