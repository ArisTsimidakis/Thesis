class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                VAR2 = ""; 
                
                {
                    Connection VAR4 = null;
                    PreparedStatement VAR5 = null;
                    ResultSet VAR6 = null;
                    try
                    {
                        
                        VAR4 = VAR3.FUN3();
                        
                        VAR5 = VAR4.FUN4("");
                        VAR6 = VAR5.executeQuery();
                        
                        VAR2 = VAR6.FUN5(1);
                    }
                    catch (SQLException VAR7)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                        catch (SQLException VAR7)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (SQLException VAR7)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            VAR11<String, String> VAR12 = new VAR11<String, String>();
            VAR12.FUN6(VAR13.VAR14,"");
            VAR12.FUN6(VAR13.VAR15, "VAR16:
            DirContext VAR17 = null;
    
            try
            {
                VAR17 = new FUN7(VAR12);
                
                String VAR18 = "" + VAR2 + "";
    
                VAR19<VAR20> VAR21 = VAR17.FUN8("", VAR18, null);
                while (VAR21.FUN9())
                {
                    SearchResult VAR22 = VAR21.next();
                    Attributes VAR23 = VAR22.FUN10();
                    VAR19<?> VAR24 = VAR23.FUN11();
                    while (VAR24.FUN9())
                    {
                        Attribute VAR25 = (VAR26) VAR24.next();
                        VAR19<?> VAR27 = VAR25.FUN11();
                        while(VAR27.FUN9())
                        {
                            VAR3.writeLine("" + VAR27.next().FUN12());
                        }
                    }
                }
            }
            catch (NamingException VAR28)
            {
                VAR3.VAR8.log(VAR9.VAR10, "", VAR28);
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
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR28);
                    }
                }
            }
    
        }
};