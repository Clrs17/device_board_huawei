savedcmd_sound/soc/qcom/qdsp6/q6mvm.mod := printf '%s\n'   q6mvm.o | awk '!x[$$0]++ { print("sound/soc/qcom/qdsp6/"$$0) }' > sound/soc/qcom/qdsp6/q6mvm.mod
