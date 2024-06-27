class VAR1{
    public void FUN1(VAR2.Container VAR3 ) throws Throwable
        {
            int VAR4 = VAR3.VAR5;
    
            
            if (VAR4 > 0 && VAR4 <= 20)
            {
                File VAR6 = new File("");
                FileOutputStream VAR7 = new FileOutputStream(VAR6);
                OutputStreamWriter VAR8 = new FUN2(VAR7, "");
                BufferedWriter VAR9 = new BufferedWriter(VAR8);
                int VAR10;
                for (VAR10 = 0; VAR10 < VAR4; VAR10++)
                {
                    try
                    {
                        VAR9.write("");
                    }
                    catch (IOException VAR11)
                    {
                        VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
                    }
                }
                
                try
                {
                    if (VAR9 != null)
                    {
                        VAR9.close();
                    }
                }
                catch (IOException VAR11)
                {
                    VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
                }
                try
                {
                    if (VAR8 != null)
                    {
                        VAR8.close();
                    }
                }
                catch (IOException VAR11)
                {
                    VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
                }
                try
                {
                    if (VAR7 != null)
                    {
                        VAR7.close();
                    }
                }
                catch (IOException VAR11)
                {
                    VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
                }
            }
    
        }
};