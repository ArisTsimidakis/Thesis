class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
    
            
            {
                Connection VAR3 = null;
                PreparedStatement VAR4 = null;
                ResultSet VAR5 = null;
    
                try
                {
                    
                    VAR3 = VAR6.FUN2();
    
                    
                    VAR4 = VAR3.FUN3("");
                    VAR5 = VAR4.executeQuery();
    
                    
                    VAR2 = VAR5.FUN4(1);
                }
                catch (SQLException VAR7)
                {
                    VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                }
                finally
                {
                    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (SQLException VAR7)
                    {
                        VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (SQLException VAR7)
                    {
                        VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (SQLException VAR7)
                    {
                        VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
                }
            }
    
            
            ByteArrayOutputStream VAR11 = null;
            ObjectOutput VAR12 = null;
    
            try
            {
                VAR11 = new FUN5() ;
                VAR12 = new FUN6(VAR11) ;
                VAR12.FUN7(VAR2);
                byte[] VAR13 = VAR11.FUN8();
                (new FUN9()).FUN10(VAR13  );
            }
            catch (IOException VAR14)
            {
                VAR6.VAR8.log(VAR9.VAR10, "", VAR14);
            }
            finally
            {
                
                try
                {
                    if (VAR12 != null)
                    {
                        VAR12.close();
                    }
                }
                catch (IOException VAR14)
                {
                    VAR6.VAR8.log(VAR9.VAR10, "", VAR14);
                }
    
                try
                {
                    if (VAR11 != null)
                    {
                        VAR11.close();
                    }
                }
                catch (IOException VAR14)
                {
                    VAR6.VAR8.log(VAR9.VAR10, "", VAR14);
                }
            }
        }
};