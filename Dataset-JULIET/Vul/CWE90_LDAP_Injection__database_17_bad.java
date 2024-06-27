class VAR1{
    public void FUN1() throws Throwable
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
                                VAR6.writeLine("" + VAR28.next().FUN11());
                            }
                        }
                    }
                }
                catch (NamingException VAR29)
                {
                    VAR6.VAR8.log(VAR9.VAR10, "", VAR29);
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
                            VAR6.VAR8.log(VAR9.VAR10, "", VAR29);
                        }
                    }
                }
            }
        }
};