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
    
                SSLSocketFactory VAR6 = null;
                SSLSocket VAR7 = null;
                PrintWriter VAR8 = null;
    
                try
                {
                    VAR6 = (VAR9) VAR9.FUN3();
                    VAR7 = (VAR10) VAR6.FUN4("", 1337);
                    VAR8 = new FUN5(VAR7.getOutputStream(), true);
                    
                    VAR8.FUN6(VAR5);
                }
                catch (IOException VAR11)
                {
                    VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
                }
                finally
                {
                    if (VAR8 != null)
                    {
                        VAR8.close();
                    }
    
                    try
                    {
                        if (VAR7 != null)
                        {
                            VAR7.close();
                        }
                    }
                    catch (IOException VAR11)
                    {
                        VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
                    }
                }
    
            }
            catch (IOException VAR11)
            {
                VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
            }
            catch (ClassNotFoundException VAR16)
            {
                VAR12.VAR13.log(VAR14.VAR15, "", VAR16);
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
                catch (IOException VAR11)
                {
                    VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR11)
                {
                    VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
                }
            }
        }
};