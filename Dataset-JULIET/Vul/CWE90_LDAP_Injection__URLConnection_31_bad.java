class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
    
                
                {
                    URLConnection VAR4 = (new FUN2("VAR5:
                    BufferedReader VAR6 = null;
                    InputStreamReader VAR7 = null;
    
                    try
                    {
                        VAR7 = new InputStreamReader(VAR4.getInputStream(), "");
                        VAR6 = new BufferedReader(VAR7);
    
                        
                        
                        VAR3 = VAR6.readLine();
                    }
                    catch (IOException VAR8)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                VAR13<String, String> VAR14 = new VAR13<String, String>();
                VAR14.FUN3(VAR15.VAR16,"");
                VAR14.FUN3(VAR15.VAR17, "VAR18:
                DirContext VAR19 = null;
    
                try
                {
                    VAR19 = new FUN4(VAR14);
                    
                    String VAR20 = "" + VAR3 + "";
    
                    VAR21<VAR22> VAR23 = VAR19.FUN5("", VAR20, null);
                    while (VAR23.FUN6())
                    {
                        SearchResult VAR24 = VAR23.next();
                        Attributes VAR25 = VAR24.FUN7();
                        VAR21<?> VAR26 = VAR25.FUN8();
                        while (VAR26.FUN6())
                        {
                            Attribute VAR27 = (VAR28) VAR26.next();
                            VAR21<?> VAR29 = VAR27.FUN8();
                            while(VAR29.FUN6())
                            {
                                VAR9.writeLine("" + VAR29.next().FUN9());
                            }
                        }
                    }
                }
                catch (NamingException VAR30)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR30);
                }
                finally
                {
                    if (VAR19 != null)
                    {
                        try
                        {
                            VAR19.close();
                        }
                        catch (NamingException VAR30)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR30);
                        }
                    }
                }
    
            }
        }
};