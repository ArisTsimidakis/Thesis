class VAR1{
    public void FUN1(byte[] VAR2 ) throws Throwable
        {
            
            ByteArrayInputStream VAR3 = null;
            ObjectInputStream VAR4 = null;
    
            try
            {
                VAR3 = new FUN2(VAR2);
                VAR4 = new ObjectInputStream(VAR3);
                String VAR5 = (String)VAR4.readObject();
    
                if (VAR5 != null)
                {
                    String VAR6 = "";
                    byte[] VAR7 = VAR6.getBytes("");
                    
                    SecretKeySpec VAR8 = new FUN3(VAR5.getBytes(""), "");
                    Cipher VAR9 = VAR10.FUN4("");
                    VAR9.FUN5(VAR10.VAR11, VAR8);
                    byte[] VAR12 = VAR9.FUN6(VAR7);
                    VAR13.writeLine(VAR13.FUN7(VAR12)); 
                }
    
            }
            catch (IOException VAR14)
            {
                VAR13.VAR15.log(VAR16.VAR17, "", VAR14);
            }
            catch (ClassNotFoundException VAR18)
            {
                VAR13.VAR15.log(VAR16.VAR17, "", VAR18);
            }
            finally
            {
                
                try
                {
                    if (VAR4 != null)
                    {
                        VAR4.close();
                    }
                }
                catch (IOException VAR14)
                {
                    VAR13.VAR15.log(VAR16.VAR17, "", VAR14);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR14)
                {
                    VAR13.VAR15.log(VAR16.VAR17, "", VAR14);
                }
            }
        }
};