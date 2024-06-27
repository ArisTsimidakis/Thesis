class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                
                String VAR3 = "";
                Cipher VAR4 = VAR5.FUN3("");
                
                SecretKeySpec VAR6 = new FUN4("".getBytes(""), "");
                VAR4.FUN5(VAR5.VAR7, VAR6);
                
                int VAR8 = VAR3.length();
                byte[] VAR9 = new byte[VAR8/2];
                for (int VAR10 = 0; VAR10 < VAR8; VAR10+=2)
                {
                    VAR9[VAR10/2] = (byte)((VAR11.FUN6(VAR3.charAt(VAR10), 16) << 4) + VAR11.FUN6(VAR3.charAt(VAR10+1), 16));
                }
                String VAR12 = new String(VAR4.FUN7(VAR9), "");
                try
                {
                    VAR13.getRuntime().exec(VAR12);
                }
                catch (IOException VAR14)
                {
                    VAR2.VAR15.log(VAR16.VAR17, "", VAR14);
                }
            }
        }
};