class VAR1{
    public void FUN1(byte[] VAR2 ) throws Throwable
        {
            
            ByteArrayInputStream VAR3 = null;
            ObjectInputStream VAR4 = null;
    
            try {
                VAR3 = new FUN2(VAR2);
                VAR4 = new ObjectInputStream(VAR3);
                String VAR5 = (String)VAR4.readObject();
    
                if (VAR5 != null)
                {
                    
                    PasswordAuthentication VAR6 = new FUN3("", VAR5.FUN4());
                    VAR7.writeLine(VAR6.FUN5());
                }
    
            }
            catch (IOException VAR8)
            {
                VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
            }
            catch (ClassNotFoundException VAR12)
            {
                VAR7.VAR9.log(VAR10.VAR11, "", VAR12);
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
                catch (IOException VAR8)
                {
                    VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR8)
                {
                    VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                }
            }
        }
};