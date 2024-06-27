class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
    
            
            {
                URLConnection VAR3 = (new FUN2("VAR4:
                BufferedReader VAR5 = null;
                InputStreamReader VAR6 = null;
    
                try
                {
                    VAR6 = new InputStreamReader(VAR3.getInputStream(), "");
                    VAR5 = new BufferedReader(VAR6);
    
                    
                    
                    VAR2 = VAR5.readLine();
                }
                catch (IOException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
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
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                }
            }
    
            for (int VAR12 = 0; VAR12 < 1; VAR12++)
            {
                VAR13<String, String> VAR14 = new VAR13<String, String>();
                VAR14.FUN3(VAR15.VAR16,"");
                VAR14.FUN3(VAR15.VAR17, "VAR18:
                DirContext VAR19 = null;
                try
                {
                    VAR19 = new FUN4(VAR14);
                    
                    String VAR20 = "" + VAR2 + "";
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
                                VAR8.writeLine("" + VAR29.next().FUN9());
                            }
                        }
                    }
                }
                catch (NamingException VAR30)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR30);
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
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR30);
                        }
                    }
                }
            }
        }
};