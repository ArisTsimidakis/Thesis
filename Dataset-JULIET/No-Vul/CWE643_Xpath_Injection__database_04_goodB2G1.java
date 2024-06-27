class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3)
            {
                VAR2 = ""; 
                
                {
                    Connection VAR4 = null;
                    PreparedStatement VAR5 = null;
                    ResultSet VAR6 = null;
                    try
                    {
                        
                        VAR4 = VAR7.FUN2();
                        
                        VAR5 = VAR4.FUN3("");
                        VAR6 = VAR5.executeQuery();
                        
                        VAR2 = VAR6.FUN4(1);
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
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (SQLException VAR8)
                        {
                            VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (SQLException VAR8)
                        {
                            VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR12)
            {
                
                VAR7.writeLine("");
            }
            else
            {
    
                String VAR13 = null;
                if(System.FUN5("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR13 = "";
                }
                else
                {
                    
                    VAR13 = "";
                }
    
                if (VAR2 != null)
                {
                    
                    String [] VAR14 = VAR2.split("");
                    if( VAR14.length < 2 )
                    {
                        return;
                    }
                    
                    String VAR15 = VAR16.FUN6(VAR14[0]);
                    String VAR17 = VAR16.FUN6(VAR14[1]);
                    
                    XPath VAR18 = VAR19.FUN7().FUN8();
                    InputSource VAR20 = new FUN9(VAR13);
                    String VAR21 = "
                                   "" + VAR17 + "" +
                                   "";
                    String VAR22 = (String)VAR18.FUN10(VAR21, VAR20, VAR23.VAR24);
                }
    
            }
        }
};