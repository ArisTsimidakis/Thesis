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
    
                Connection VAR6 = null;
    
                try
                {
                    VAR6 = VAR7.FUN3();
    
                    
                    VAR6.FUN4(VAR5);
                }
                catch (SQLException VAR8)
                {
                    VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                }
                finally
                {
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (SQLException VAR8)
                    {
                        VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
    
            }
            catch (IOException VAR12)
            {
                VAR7.VAR9.log(VAR10.VAR11, "", VAR12);
            }
            catch (ClassNotFoundException VAR13)
            {
                VAR7.VAR9.log(VAR10.VAR11, "", VAR13);
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
                    VAR7.VAR9.log(VAR10.VAR11, "", VAR12);
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
                    VAR7.VAR9.log(VAR10.VAR11, "", VAR12);
                }
            }
        }
};