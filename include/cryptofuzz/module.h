#pragma once

#include <string>
#include <cryptofuzz/components.h>
#include <cryptofuzz/operations.h>
#include <fuzzing/datasource/id.hpp>
#include <optional>

namespace cryptofuzz {

class Module {
    public:
        const std::string name;
        const uint64_t ID;

        Module(const std::string name) :
            name(name),
            ID(fuzzing::datasource::ID( ("Cryptofuzz/Module/" + name).c_str()))
        { }

        virtual ~Module() { }

        virtual std::optional<component::Digest> OpDigest(operation::Digest& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::MAC> OpHMAC(operation::HMAC& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::Ciphertext> OpSymmetricEncrypt(operation::SymmetricEncrypt& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::Cleartext> OpSymmetricDecrypt(operation::SymmetricDecrypt& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::Key> OpKDF_SCRYPT(operation::KDF_SCRYPT& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::Key> OpKDF_HKDF(operation::KDF_HKDF& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::Key> OpKDF_TLS1_PRF(operation::KDF_TLS1_PRF& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::Key> OpKDF_PBKDF(operation::KDF_PBKDF& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::Key> OpKDF_PBKDF1(operation::KDF_PBKDF1& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::Key> OpKDF_PBKDF2(operation::KDF_PBKDF2& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::Key> OpKDF_ARGON2(operation::KDF_ARGON2& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::Key> OpKDF_SSH(operation::KDF_SSH& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::Key> OpKDF_X963(operation::KDF_X963& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::Key> OpKDF_BCRYPT(operation::KDF_BCRYPT& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::Key> OpKDF_SP_800_108(operation::KDF_SP_800_108& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::MAC> OpCMAC(operation::CMAC& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::Signature> OpSign(operation::Sign& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<bool> OpVerify(operation::Verify& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::ECC_PublicKey> OpECC_PrivateToPublic(operation::ECC_PrivateToPublic& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<bool> OpECC_ValidatePubkey(operation::ECC_ValidatePubkey& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::ECC_KeyPair> OpECC_GenerateKeyPair(operation::ECC_GenerateKeyPair& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::ECDSA_Signature> OpECDSA_Sign(operation::ECDSA_Sign& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<bool> OpECDSA_Verify(operation::ECDSA_Verify& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::Secret> OpECDH_Derive(operation::ECDH_Derive& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::Ciphertext> OpECIES_Encrypt(operation::ECIES_Encrypt& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::DH_KeyPair> OpDH_GenerateKeyPair(operation::DH_GenerateKeyPair& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::Bignum> OpDH_Derive(operation::DH_Derive& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::Bignum> OpBignumCalc(operation::BignumCalc& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::BLS_PublicKey> OpBLS_PrivateToPublic(operation::BLS_PrivateToPublic& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::BLS_Signature> OpBLS_Sign(operation::BLS_Sign& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<bool> OpBLS_Verify(operation::BLS_Verify& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<bool> OpBLS_Pairing(operation::BLS_Pairing& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::G1> OpBLS_HashToG1(operation::BLS_HashToG1& op) {
            (void)op;
            return std::nullopt;
        }
        virtual std::optional<component::G2> OpBLS_HashToG2(operation::BLS_HashToG2& op) {
            (void)op;
            return std::nullopt;
        }
};

} /* namespace cryptofuzz */
