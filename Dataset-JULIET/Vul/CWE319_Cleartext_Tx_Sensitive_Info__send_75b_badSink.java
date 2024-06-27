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
    
                Socket VAR6 = null;
                PrintWriter VAR7 = null;
    
                try
                {
                    VAR6 = new Socket("", 1337);
                    VAR7 = new FUN3(VAR6.getOutputStream(), true);
                    
                    VAR7.FUN4(VAR5);
                }
                catch (IOException VAR8)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                }
                finally
                {
                    if (VAR7 != null)
                    {
                        VAR7.close();
                    }
    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                    }
                }
    
            }
            catch (IOException VAR8)
            {
                VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
            }
            catch (ClassNotFoundException VAR13)
            {
                VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
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
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                }
            }
        }
};