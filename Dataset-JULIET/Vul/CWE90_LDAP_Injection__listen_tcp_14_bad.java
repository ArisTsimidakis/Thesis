class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4 == 5)
            {
                VAR2 = ""; 
                
                {
                    ServerSocket VAR5 = null;
                    Socket VAR6 = null;
                    BufferedReader VAR7 = null;
                    InputStreamReader VAR8 = null;
                    
                    try
                    {
                        VAR5 = new FUN2(39543);
                        VAR6 = VAR5.accept();
                        
                        VAR8 = new InputStreamReader(VAR6.getInputStream(), "");
                        VAR7 = new BufferedReader(VAR8);
                        
                        VAR2 = VAR7.readLine();
                    }
                    catch (IOException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
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
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
    
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
    
                        
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
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
                            VAR3.writeLine("" + VAR29.next().FUN9());
                        }
                    }
                }
            }
            catch (NamingException VAR30)
            {
                VAR3.VAR10.log(VAR11.VAR12, "", VAR30);
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
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR30);
                    }
                }
            }
    
        }
};