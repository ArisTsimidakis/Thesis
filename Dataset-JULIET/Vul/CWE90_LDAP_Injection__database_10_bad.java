class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = ""; 
                
                {
                    Connection VAR5 = null;
                    PreparedStatement VAR6 = null;
                    ResultSet VAR7 = null;
                    try
                    {
                        
                        VAR5 = VAR3.FUN2();
                        
                        VAR6 = VAR5.FUN3("");
                        VAR7 = VAR6.executeQuery();
                        
                        VAR2 = VAR7.FUN4(1);
                    }
                    catch (SQLException VAR8)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (SQLException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (SQLException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            VAR12<String, String> VAR13 = new VAR12<String, String>();
            VAR13.FUN5(VAR14.VAR15,"");
            VAR13.FUN5(VAR14.VAR16, "VAR17:
            DirContext VAR18 = null;
    
            try
            {
                VAR18 = new FUN6(VAR13);
                
                String VAR19 = "" + VAR2 + "";
    
                VAR20<VAR21> VAR22 = VAR18.FUN7("", VAR19, null);
                while (VAR22.FUN8())
                {
                    SearchResult VAR23 = VAR22.next();
                    Attributes VAR24 = VAR23.FUN9();
                    VAR20<?> VAR25 = VAR24.FUN10();
                    while (VAR25.FUN8())
                    {
                        Attribute VAR26 = (VAR27) VAR25.next();
                        VAR20<?> VAR28 = VAR26.FUN10();
                        while(VAR28.FUN8())
                        {
                            VAR3.writeLine("" + VAR28.next().FUN11());
                        }
                    }
                }
            }
            catch (NamingException VAR29)
            {
                VAR3.VAR9.log(VAR10.VAR11, "", VAR29);
            }
            finally
            {
                if (VAR18 != null)
                {
                    try
                    {
                        VAR18.close();
                    }
                    catch (NamingException VAR29)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR29);
                    }
                }
            }
    
        }
};