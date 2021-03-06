// This file was autogenerated by print_selective_registration_header.py
#ifndef OPS_TO_REGISTER
#define OPS_TO_REGISTER

    namespace {
      constexpr const char* skip(const char* x) {
        return (*x) ? (*x == ' ' ? skip(x + 1) : x) : x;
      }

      constexpr bool isequal(const char* x, const char* y) {
        return (*skip(x) && *skip(y))
                   ? (*skip(x) == *skip(y) && isequal(skip(x) + 1, skip(y) + 1))
                   : (!*skip(x) && !*skip(y));
      }

      template<int N>
      struct find_in {
        static constexpr bool f(const char* x, const char* const y[N]) {
          return isequal(x, y[0]) || find_in<N - 1>::f(x, y + 1);
        }
      };

      template<>
      struct find_in<0> {
        static constexpr bool f(const char* x, const char* const y[]) {
          return false;
        }
      };
    }  // end namespace
    constexpr const char* kNecessaryOpKernelClasses[] = {
"BinaryOp< CPUDevice, functor::add<float>>",
"BinaryOp< CPUDevice, functor::add<int32>>",
"AddNOp< CPUDevice, float>",
"ReductionOp<CPUDevice, bool, Eigen::internal::AndReducer>",
"AssertOp",
"BiasOp<CPUDevice, float>",
"CpuCastOp",
"ConcatV2Op<CPUDevice, ::tensorflow::int32>",
"ConcatV2Op<CPUDevice, float>",
"ConstantOp",
"Conv2DOp<CPUDevice, float>",
"CropAndResizeOp<CPUDevice, float>",
"DequantizeOp<CPUDevice, quint8>",
"EnterOp",
"BinaryOp< CPUDevice, functor::equal_to<int32>>",
"ExitOp",
"UnaryOp< CPUDevice, functor::exp<float>>",
"ExpandDimsOp",
"FillOp<CPUDevice, float>",
"GatherOp<CPUDevice, float, int32>",
"BinaryOp< CPUDevice, functor::greater<float>>",
"BinaryOp< CPUDevice, functor::greater<int32>>",
"BinaryOp< CPUDevice, functor::greater_equal<int32>>",
"IdentityOp",
"BinaryOp< CPUDevice, functor::less<int32>>",
"BinaryOp<CPUDevice, functor::logical_and>",
"LoopCondOp",
"ReductionOp<CPUDevice, ::tensorflow::int32, Eigen::internal::MaxReducer<::tensorflow::int32>>",
"MaxPoolingOp<CPUDevice, float>",
"BinaryOp< CPUDevice, functor::maximum<float>>",
"ReductionOp<CPUDevice, float, Eigen::internal::MeanReducer<float>>",
"MergeOp",
"BinaryOp< CPUDevice, functor::minimum<float>>",
"BinaryOp< CPUDevice, functor::minimum<int32>>",
"BinaryOp< CPUDevice, functor::mul<float>>",
"BinaryOp< CPUDevice, functor::mul<int32>>",
"NextIterationOp",
"NoOp",
"NonMaxSuppressionOp<CPUDevice>",
"PackOp<CPUDevice, ::tensorflow::int32>",
"PackOp<CPUDevice, float>",
"PadOp<CPUDevice, float>",
"PlaceholderOp",
"RangeOp<::tensorflow::int32>",
"RankOp",
"BinaryOp< CPUDevice, functor::div<float>>",
"ReluOp<CPUDevice, float>",
"Relu6Op<CPUDevice, float>",
"ReshapeOp",
"ResizeBilinearOp<CPUDevice, float>",
"UnaryOp< CPUDevice, functor::round<float>>",
"ShapeOp<int32>",
"SizeOp<int32>",
"SliceOp<CPUDevice, ::tensorflow::int32>",
"SliceOp<CPUDevice, float>",
"SoftmaxOp<CPUDevice, float>",
"SplitOpCPU<float>",
"SqueezeOp",
"StridedSliceOp<CPUDevice, ::tensorflow::int32>",
"StridedSliceOp<CPUDevice, float>",
"BinaryOp< CPUDevice, functor::sub<float>>",
"BinaryOp< CPUDevice, functor::sub<int32>>",
"SwitchOp",
"TensorArrayPackOrGatherOp<CPUDevice, float, false >",
"TensorArrayReadOp<CPUDevice, float>",
"TensorArrayUnpackOrScatterOp<CPUDevice, float, false >",
"TensorArraySizeOp",
"TensorArrayOp",
"TensorArrayWriteOp<CPUDevice, float>",
"TileOp<CPUDevice>",
"TopK<CPUDevice, float>",
"TransposeCpuOp",
"UnpackOp<CPUDevice, ::tensorflow::int32>",
"UnpackOp<CPUDevice, float>",
"WhereCPUOp<CPUDevice>",
"ZerosLikeOp< CPUDevice, float>",
"RecvOp",
"SendOp",
};
#define SHOULD_REGISTER_OP_KERNEL(clz) (find_in<sizeof(kNecessaryOpKernelClasses) / sizeof(*kNecessaryOpKernelClasses)>::f(clz, kNecessaryOpKernelClasses))

constexpr inline bool ShouldRegisterOp(const char op[]) {
  return false
     || isequal(op, "Add")
     || isequal(op, "AddN")
     || isequal(op, "All")
     || isequal(op, "Assert")
     || isequal(op, "BiasAdd")
     || isequal(op, "Cast")
     || isequal(op, "ConcatV2")
     || isequal(op, "Const")
     || isequal(op, "Conv2D")
     || isequal(op, "CropAndResize")
     || isequal(op, "Dequantize")
     || isequal(op, "Enter")
     || isequal(op, "Equal")
     || isequal(op, "Exit")
     || isequal(op, "Exp")
     || isequal(op, "ExpandDims")
     || isequal(op, "Fill")
     || isequal(op, "Gather")
     || isequal(op, "Greater")
     || isequal(op, "GreaterEqual")
     || isequal(op, "Identity")
     || isequal(op, "Less")
     || isequal(op, "LogicalAnd")
     || isequal(op, "LoopCond")
     || isequal(op, "Max")
     || isequal(op, "MaxPool")
     || isequal(op, "Maximum")
     || isequal(op, "Mean")
     || isequal(op, "Merge")
     || isequal(op, "Minimum")
     || isequal(op, "Mul")
     || isequal(op, "NextIteration")
     || isequal(op, "NoOp")
     || isequal(op, "NonMaxSuppression")
     || isequal(op, "Pack")
     || isequal(op, "Pad")
     || isequal(op, "Placeholder")
     || isequal(op, "Range")
     || isequal(op, "Rank")
     || isequal(op, "RealDiv")
     || isequal(op, "Relu")
     || isequal(op, "Relu6")
     || isequal(op, "Reshape")
     || isequal(op, "ResizeBilinear")
     || isequal(op, "Round")
     || isequal(op, "Shape")
     || isequal(op, "Size")
     || isequal(op, "Slice")
     || isequal(op, "Softmax")
     || isequal(op, "Split")
     || isequal(op, "Squeeze")
     || isequal(op, "StridedSlice")
     || isequal(op, "Sub")
     || isequal(op, "Switch")
     || isequal(op, "TensorArrayGatherV3")
     || isequal(op, "TensorArrayReadV3")
     || isequal(op, "TensorArrayScatterV3")
     || isequal(op, "TensorArraySizeV3")
     || isequal(op, "TensorArrayV3")
     || isequal(op, "TensorArrayWriteV3")
     || isequal(op, "Tile")
     || isequal(op, "TopKV2")
     || isequal(op, "Transpose")
     || isequal(op, "Unpack")
     || isequal(op, "Where")
     || isequal(op, "ZerosLike")
     || isequal(op, "_Recv")
     || isequal(op, "_Send")
  ;
}
#define SHOULD_REGISTER_OP(op) ShouldRegisterOp(op)

#define SHOULD_REGISTER_OP_GRADIENT false
#endif
