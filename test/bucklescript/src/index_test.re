open Jest;
open Expect;

describe("Basic test", () => {
  test("basic", () => {
    let className = [%tw "flex-row flex"];
    expect(className) |> toBe("flex-row flex");
  })
});
