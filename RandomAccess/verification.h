
extern void HPCC_Power2NodesMPIRandomAccessCheck(u64Int logTableSize,
				     u64Int TableSize,
				     s64Int LocalTableSize,
				     u64Int GlobalStartMyProc,
				     int logNumProcs,
				     int NumProcs,
				     int MyProc,
				     u64Int ProcNumUpdates,
				     MPI_Datatype UINT64_DT,
				     s64Int *NumErrors);


extern void HPCC_AnyNodesMPIRandomAccessCheck(u64Int logTableSize,
				  u64Int TableSize,
				  s64Int LocalTableSize,
				  u64Int MinLocalTableSize,
				  u64Int GlobalStartMyProc,
				  u64Int Top,
				  int logNumProcs,
				  int NumProcs,
				  int Remainder,
				  int MyProc,
				  u64Int ProcNumUpdates,
				  MPI_Datatype UINT64_DT,
				  s64Int *NumErrors);


extern void HPCC_Power2NodesMPIRandomAccessCheck_LCG(u64Int logTableSize,
				     u64Int TableSize,
				     s64Int LocalTableSize,
				     u64Int GlobalStartMyProc,
				     int logNumProcs,
				     int NumProcs,
				     int MyProc,
				     u64Int ProcNumUpdates,
				     MPI_Datatype UINT64_DT,
				     s64Int *NumErrors);


extern void HPCC_AnyNodesMPIRandomAccessCheck_LCG(u64Int logTableSize,
				  u64Int TableSize,
				  s64Int LocalTableSize,
				  u64Int MinLocalTableSize,
				  u64Int GlobalStartMyProc,
				  u64Int Top,
				  int logNumProcs,
				  int NumProcs,
				  int Remainder,
				  int MyProc,
				  u64Int ProcNumUpdates,
				  MPI_Datatype UINT64_DT,
				  s64Int *NumErrors);
