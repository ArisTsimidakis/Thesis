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
                PreparedStatement VAR7 = null;
                ResultSet VAR8 = null;
    
                try
                {
                    
                    VAR6 = VAR9.FUN3();
                    VAR7 = VAR6.FUN4("");
                    VAR7.FUN5(1, VAR5);
    
                    VAR8 = VAR7.executeQuery();
    
                    VAR9.writeLine(VAR8.FUN6()); 
                }
                catch (SQLException VAR10)
                {
                    VAR9.VAR11.log(VAR12.VAR13, "", VAR10);
                }
                finally
                {
                    try
                    {
                        if (VAR8 != null)
                        {
                            VAR8.close();
                        }
                    }
                    catch (SQLException VAR10)
                    {
                        VAR9.VAR11.log(VAR12.VAR13, "", VAR10);
                    }
    
                    try
                    {
                        if (VAR7 != null)
                        {
                            VAR7.close();
                        }
                    }
                    catch (SQLException VAR10)
                    {
                        VAR9.VAR11.log(VAR12.VAR13, "", VAR10);
                    }
    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (SQLException VAR10)
                    {
                        VAR9.VAR11.log(VAR12.VAR13, "", VAR10);
                    }
                }
    
            }
            catch (IOException VAR14)
            {
                VAR9.VAR11.log(VAR12.VAR13, "", VAR14);
            }
            catch (ClassNotFoundException VAR15)
            {
                VAR9.VAR11.log(VAR12.VAR13, "", VAR15);
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
                    VAR9.VAR11.log(VAR12.VAR13, "", VAR14);
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
                    VAR9.VAR11.log(VAR12.VAR13, "", VAR14);
                }
            }
        }
};