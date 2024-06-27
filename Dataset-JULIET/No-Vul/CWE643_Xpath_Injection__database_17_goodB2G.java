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
    
            for (int VAR11 = 0; VAR11 < 1; VAR11++)
            {
                String VAR12 = null;
                if(System.FUN5("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR12 = "";
                }
                else
                {
                    
                    VAR12 = "";
                }
                if (VAR2 != null)
                {
                    
                    String [] VAR13 = VAR2.split("");
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