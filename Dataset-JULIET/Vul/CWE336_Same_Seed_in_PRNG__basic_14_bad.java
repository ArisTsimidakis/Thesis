class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.VAR3 == 5)
            {
                final byte[] VAR4 = new byte[] {0x01, 0x02, 0x03, 0x04, 0x05};
                SecureRandom VAR5 = new FUN2();
                
                VAR5.FUN3(VAR4);
                VAR2.writeLine("" + VAR5.nextInt()); 
                VAR2.writeLine("" + VAR5.nextInt());
            }
        }
};