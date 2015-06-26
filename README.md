# migration-parse-to-leancloud

Parse 和 LeanCloud 功能比较相似，连接口都能基本兼容。对 iOS 开发者来说，要将应用从 Parse 迁移到 LeanCloud，只需要做如下几步：

* 在 project 中删除对 Parse SDK 的依赖；
* 加入对 LeanCloud SDK 的依赖；
* 将 iOS/src/include/migration.h 文件加入工程中；
* 重新编译、运行即可。
