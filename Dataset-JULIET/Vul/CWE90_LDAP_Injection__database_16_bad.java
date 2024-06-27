class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            while (true)
            {
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
                break;
            }
    
            VAR11<String, String> VAR12 = new VAR11<String, String>();
            VAR12.FUN5(VAR13.VAR14,"");
            VAR12.FUN5(VAR13.VAR15, "VAR16:
            DirContext VAR17 = null;
    
            try
            {
                VAR17 = new FUN6(VAR12);
                
                String VAR18 = "" + VAR2 + "";
    
                VAR19<VAR20> VAR21 = VAR17.FUN7("", VAR18, null);
                while (VAR21.FUN8())
                {
                    SearchResult VAR22 = VAR21.next();
                    Attributes VAR23 = VAR22.FUN9();
                    VAR19<?> VAR24 = VAR23.FUN10();
                    while (VAR24.FUN8())
                    {
                        Attribute VAR25 = (VAR26) VAR24.next();
                        VAR19<?> VAR27 = VAR25.FUN10();
                        while(VAR27.FUN8())
                        {
                            VAR6.writeLine("" + VAR27.next().FUN11());
                        }
                    }
                }
            }
            catch (NamingException VAR28)
            {
                VAR6.VAR8.log(VAR9.VAR10, "", VAR28);
            }
            finally
            {
                if (VAR17 != null)
                {
                    try
                    {
                        VAR17.close();
                    }
                    catch (NamingException VAR28)
                    {
                        VAR6.VAR8.log(VAR9.VAR10, "", VAR28);
                    }
                }
            }
    
        }
};