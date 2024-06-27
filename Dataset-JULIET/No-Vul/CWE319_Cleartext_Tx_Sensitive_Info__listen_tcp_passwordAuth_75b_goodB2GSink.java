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
                    
                    {
                        Cipher VAR6 = VAR7.FUN3("");
                        
                        SecretKeySpec VAR8 = new FUN4("".getBytes(""), "");
                        VAR6.FUN5(VAR7.VAR9, VAR8);
                        VAR5 = new String(VAR6.FUN6(VAR5.getBytes("")), "");
                    }
                    PasswordAuthentication VAR10 = new FUN7("", VAR5.FUN8());
                    VAR11.writeLine(VAR10.FUN9());
                }
    
            }
            catch (IOException VAR12)
            {
                VAR11.VAR13.log(VAR14.VAR15, "", VAR12);
            }
            catch (ClassNotFoundException VAR16)
            {
                VAR11.VAR13.log(VAR14.VAR15, "", VAR16);
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
                catch (IOException VAR12)
                {
                    VAR11.VAR13.log(VAR14.VAR15, "", VAR12);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR12)
                {
                    VAR11.VAR13.log(VAR14.VAR15, "", VAR12);
                }
            }
        }
};