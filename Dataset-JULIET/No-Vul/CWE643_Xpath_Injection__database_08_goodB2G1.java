class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (FUN2())
            {
                VAR2 = ""; 
                
                {
                    Connection VAR3 = null;
                    PreparedStatement VAR4 = null;
                    ResultSet VAR5 = null;
                    try
                    {
                        
                        VAR3 = VAR6.FUN3();
                        
                        VAR4 = VAR3.FUN4("");
                        VAR5 = VAR4.executeQuery();
                        
                        VAR2 = VAR5.FUN5(1);
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
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (FUN6())
            {
                
                VAR6.writeLine("");
            }
            else
            {
    
                String VAR11 = null;
                if(System.FUN7("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR11 = "";
                }
                else
                {
                    
                    VAR11 = "";
                }
    
                if (VAR2 != null)
                {
                    
                    String [] VAR12 = VAR2.split("");
                    if( VAR12.length < 2 )
                    {
                        return;
                    }
                    
                    String VAR13 = VAR14.FUN8(VAR12[0]);
                    String VAR15 = VAR14.FUN8(VAR12[1]);
                    
                    XPath VAR16 = VAR17.FUN9().FUN10();
                    InputSource VAR18 = new FUN11(VAR11);
                    String VAR19 = "
                                   "" + VAR15 + "" +
                                   "";
                    String VAR20 = (String)VAR16.FUN12(VAR19, VAR18, VAR21.VAR22);
                }
    
            }
        }
};