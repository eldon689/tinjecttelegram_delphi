{$IF CompilerVersion < 28}
  {$UNDEF USE_SYS_NET}
	{$DEFINE USE_INDY}
{$ELSE}
  {$UNDEF USE_INDY}
	{$DEFINE USE_SYS_NET}
{$ENDIF}