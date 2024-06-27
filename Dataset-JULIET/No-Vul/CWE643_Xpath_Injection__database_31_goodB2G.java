class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
    
                
                {
                    Connection VAR4 = null;
                    PreparedStatement VAR5 = null;
                    ResultSet VAR6 = null;
    
                    try
                    {
                        
                        VAR4 = VAR7.FUN2();
    
                        
                        VAR5 = VAR4.FUN3("");
                        VAR6 = VAR5.executeQuery();
    
                        
                        VAR3 = VAR6.FUN4(1);
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
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                String VAR12 = null;
                if(System.FUN5("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR12 = "";
                }
                else
                {
                    
                    VAR12 = "";
                }
    
                if (VAR3 != null)
                {
                    
                    String [] VAR13 = VAR3.split("");
                    if( VAR13.length < 2 )
                    {
                        return;
                    }
                    
                    String VAR14 = VAR15.FUN6(VAR13[0]);
                    String VAR16 = VAR15.FUN6(VAR13[1]);
                    
                    XPath VAR17 = VAR18.FUN7().FUN8();
                    InputSource VAR19 = new FUN9(VAR12);
                    String VAR20 = "
                                   "" + VAR16 + "" +
                                   "";
                    String VAR21 = (String)VAR17.FUN10(VAR20, VAR19, VAR22.VAR23);
                }
    
            }
        }
};