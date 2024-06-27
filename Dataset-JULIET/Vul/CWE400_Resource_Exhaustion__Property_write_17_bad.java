class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
    
            
    
            VAR2 = VAR3.VAR4; 
    
            
            
            {
                String VAR5 = System.FUN2("");
                try
                {
                    VAR2 = VAR3.parseInt(VAR5.trim());
                }
                catch(NumberFormatException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                }
            }
    
            for (int VAR11 = 0; VAR11 < 1; VAR11++)
            {
                File VAR12 = new File("");
                FileOutputStream VAR13 = new FileOutputStream(VAR12);
                OutputStreamWriter VAR14 = new FUN3(VAR13, "");
                BufferedWriter VAR15 = new BufferedWriter(VAR14);
                int VAR16;
                
                for (VAR16 = 0; VAR16 < VAR2; VAR16++)
                {
                    try
                    {
                        VAR15.write("");
                    }
                    catch (IOException VAR17)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR17);
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
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR17);
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
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR17);
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
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR17);
                }
            }
        }
};