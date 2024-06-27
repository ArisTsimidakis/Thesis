class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
    
            
            VAR2 = VAR3.VAR4;
    
            
            if (VAR2 > 0 && VAR2 <= 20)
            {
                File VAR5 = new File("");
                FileOutputStream VAR6 = new FileOutputStream(VAR5);
                OutputStreamWriter VAR7 = new FUN2(VAR6, "");
                BufferedWriter VAR8 = new BufferedWriter(VAR7);
                int VAR9;
                for (VAR9 = 0; VAR9 < VAR2; VAR9++)
                {
                    try
                    {
                        VAR8.write("");
                    }
                    catch (IOException VAR10)
                    {
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
                    }
                }
                
                try
                {
                    if (VAR8 != null)
                    {
                        VAR8.close();
                    }
                }
                catch (IOException VAR10)
                {
                    VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
                }
                try
                {
                    if (VAR7 != null)
                    {
                        VAR7.close();
                    }
                }
                catch (IOException VAR10)
                {
                    VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
                }
                try
                {
                    if (VAR6 != null)
                    {
                        VAR6.close();
                    }
                }
                catch (IOException VAR10)
                {
                    VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
                }
            }
    
        }
};