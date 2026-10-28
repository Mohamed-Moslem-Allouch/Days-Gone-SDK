#pragma once
#include "Basic.hpp"

namespace SDK {

// Class: VectorVM.NiagaraDataObject
class NiagaraDataObject : public Object {
public:
};

// Class: VectorVM.NiagaraCurveDataObject
class NiagaraCurveDataObject : public NiagaraDataObject {
public:
    class UObject* CurveObj; // 0x0028 (0x0008)
};

// Class: VectorVM.NiagaraSparseVolumeDataObject
class NiagaraSparseVolumeDataObject : public NiagaraDataObject {
public:
};

} // namespace SDK
