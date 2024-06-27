class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            {
                int VAR3;
    
                VAR3 = VAR4.VAR5; 
    
                
                
                {
                    String VAR6 = System.FUN2("");
                    try
                    {
                        VAR3 = VAR4.parseInt(VAR6.trim());
                    }
                    catch(NumberFormatException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                int VAR3 = VAR2;
    
                File VAR12 = new File("");
                FileOutputStream VAR13 = new FileOutputStream(VAR12);
                OutputStreamWriter VAR14 = new FUN3(VAR13, "");
                BufferedWriter VAR15 = new BufferedWriter(VAR14);
                int VAR16;
    
                
                for (VAR16 = 0; VAR16 < VAR3; VAR16++)
                {
                    try
                    {
                        VAR15.write("");
                    }
                    catch (IOException VAR17)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR17);
                    }
                }
    
                
                try
                {
                    if (VAR15 != null)
                    {
                        VAR15.close();
                    }
                }
                catch (IOException VAR17)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR17);
                }
    
                try
                {
                    if (VAR14 != null)
                    {
                        VAR14.close();
                    }
                }
                catch (IOException VAR17)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR17);
                }
    
                try
                {
                    if (VAR13 != null)
                    {
                        VAR13.close();
                    }
                }
                catch (IOException VAR17)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR17);
                }
    
            }
        }
};