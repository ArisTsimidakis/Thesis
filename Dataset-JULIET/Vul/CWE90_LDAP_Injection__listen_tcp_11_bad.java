class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                VAR2 = ""; 
                
                {
                    ServerSocket VAR4 = null;
                    Socket VAR5 = null;
                    BufferedReader VAR6 = null;
                    InputStreamReader VAR7 = null;
                    
                    try
                    {
                        VAR4 = new FUN3(39543);
                        VAR5 = VAR4.accept();
                        
                        VAR7 = new InputStreamReader(VAR5.getInputStream(), "");
                        VAR6 = new BufferedReader(VAR7);
                        
                        VAR2 = VAR6.readLine();
                    }
                    catch (IOException VAR8)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
    
                        
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR8)
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
            VAR13.FUN4(VAR14.VAR15,"");
            VAR13.FUN4(VAR14.VAR16, "VAR17:
            DirContext VAR18 = null;
    
            try
            {
                VAR18 = new FUN5(VAR13);
                
                String VAR19 = "" + VAR2 + "";
    
                VAR20<VAR21> VAR22 = VAR18.FUN6("", VAR19, null);
                while (VAR22.FUN7())
                {
                    SearchResult VAR23 = VAR22.next();
                    Attributes VAR24 = VAR23.FUN8();
                    VAR20<?> VAR25 = VAR24.FUN9();
                    while (VAR25.FUN7())
                    {
                        Attribute VAR26 = (VAR27) VAR25.next();
                        VAR20<?> VAR28 = VAR26.FUN9();
                        while(VAR28.FUN7())
                        {
                            VAR3.writeLine("" + VAR28.next().FUN10());
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