class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3 != 5)
            {
                
                VAR2 = null;
            }
            else
            {
    
                
                VAR2 = "";
    
            }
    
            VAR4<String, String> VAR5 = new VAR4<String, String>();
            VAR5.FUN2(VAR6.VAR7,"");
            VAR5.FUN2(VAR6.VAR8, "VAR9:
            DirContext VAR10 = null;
    
            try
            {
                VAR10 = new FUN3(VAR5);
                
                String VAR11 = "" + VAR2 + "";
    
                VAR12<VAR13> VAR14 = VAR10.FUN4("", VAR11, null);
                while (VAR14.FUN5())
                {
                    SearchResult VAR15 = VAR14.next();
                    Attributes VAR16 = VAR15.FUN6();
                    VAR12<?> VAR17 = VAR16.FUN7();
                    while (VAR17.FUN5())
                    {
                        Attribute VAR18 = (VAR19) VAR17.next();
                        VAR12<?> VAR20 = VAR18.FUN7();
                        while(VAR20.FUN5())
                        {
                            VAR21.writeLine("" + VAR20.next().FUN8());
                        }
                    }
                }
            }
            catch (NamingException VAR22)
            {
                VAR21.VAR23.log(VAR24.VAR25, "", VAR22);
            }
            finally
            {
                if (VAR10 != null)
                {
                    try
                    {
                        VAR10.close();
                    }
                    catch (NamingException VAR22)
                    {
                        VAR21.VAR23.log(VAR24.VAR25, "", VAR22);
                    }
                }
            }
    
        }
};