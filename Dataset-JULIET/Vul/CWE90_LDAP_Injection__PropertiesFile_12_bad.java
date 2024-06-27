class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                VAR2 = ""; 
                
                {
                    Properties VAR4 = new Properties();
                    FileInputStream VAR5 = null;
                    try
                    {
                        VAR5 = new FileInputStream("");
                        VAR4.FUN3(VAR5);
                        
                        VAR2 = VAR4.FUN4("");
                    }
                    catch (IOException VAR6)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
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
                        catch (IOException VAR6)
                        {
                            VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                        }
                    }
                }
            }
            else
            {
    
                
                VAR2 = "";
    
            }
    
            VAR10<String, String> VAR11 = new VAR10<String, String>();
            VAR11.FUN5(VAR12.VAR13,"");
            VAR11.FUN5(VAR12.VAR14, "VAR15:
            DirContext VAR16 = null;
    
            try
            {
                VAR16 = new FUN6(VAR11);
                
                String VAR17 = "" + VAR2 + "";
    
                VAR18<VAR19> VAR20 = VAR16.FUN7("", VAR17, null);
                while (VAR20.FUN8())
                {
                    SearchResult VAR21 = VAR20.next();
                    Attributes VAR22 = VAR21.FUN9();
                    VAR18<?> VAR23 = VAR22.FUN10();
                    while (VAR23.FUN8())
                    {
                        Attribute VAR24 = (VAR25) VAR23.next();
                        VAR18<?> VAR26 = VAR24.FUN10();
                        while(VAR26.FUN8())
                        {
                            VAR3.writeLine("" + VAR26.next().FUN11());
                        }
                    }
                }
            }
            catch (NamingException VAR27)
            {
                VAR3.VAR7.log(VAR8.VAR9, "", VAR27);
            }
            finally
            {
                if (VAR16 != null)
                {
                    try
                    {
                        VAR16.close();
                    }
                    catch (NamingException VAR27)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR27);
                    }
                }
            }
    
        }
};